/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C004FFF8
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A3BC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C004FF30 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C004FC74 (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnosticsInternal(
        DXGDIAGNOSTICS *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *const a4,
        unsigned int *a5)
{
  unsigned int *v5; // r15
  _DWORD *v6; // r12
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned int v9; // r14d
  bool v12; // zf
  size_t v13; // r8
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // r15d
  int v18; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v19; // [rsp+28h] [rbp-90h]
  unsigned __int8 v21[16]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v22; // [rsp+50h] [rbp-68h]
  __int128 v23; // [rsp+60h] [rbp-58h]

  v5 = a5;
  v6 = (_DWORD *)((char *)this + 16);
  v7 = *((_DWORD *)this + 8);
  v8 = 0;
  v9 = *((_DWORD *)this + 9);
  v19 = a4;
  v12 = v9 == v7;
  if ( v9 < v7 )
  {
    v9 += *v6;
    v12 = v9 == v7;
  }
  if ( !v12 )
  {
    if ( a2 == -1 )
    {
      if ( v9 > v7 )
      {
        v8 = v9 - v7;
        v13 = v9 - v7;
        if ( v9 - v7 > a3 )
          v13 = a3;
        DXGDIAGNOSTICS::CopyFromBuffer(this, v7, v13, a4);
      }
      goto LABEL_29;
    }
    v18 = 0;
    v14 = 0;
    if ( v7 >= v9 )
      goto LABEL_29;
    while ( 1 )
    {
      v15 = v7 % *v6;
      *(_OWORD *)v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      DXGDIAGNOSTICS::CopyFromBuffer(this, v15, 0x30uLL, v21);
      if ( SDWORD1(v23) < 0 || (DWORD1(v23) & 0x7FFFFFFF) == a2 )
      {
        if ( !v14 )
          v18 = v7 % *v6;
        v14 += *(_DWORD *)&v21[4];
        if ( v14 >= a3 && !v5 )
        {
LABEL_23:
          if ( v14 )
          {
            if ( a3 )
            {
              if ( v14 <= a3 )
                a3 = v14;
              DXGDIAGNOSTICS::CopyFromBuffer(this, v18, a3, v19);
            }
            v8 += v14;
          }
          break;
        }
      }
      else if ( v14 )
      {
        v16 = v14;
        if ( a3 < v14 )
          v16 = a3;
        if ( v16 )
        {
          DXGDIAGNOSTICS::CopyFromBuffer(this, v18, v16, v19);
          v19 += v16;
          a3 -= v16;
        }
        v5 = a5;
        v8 += v14;
        v14 = 0;
      }
      v7 += *(_DWORD *)&v21[4];
      if ( v7 >= v9 )
        goto LABEL_23;
    }
  }
LABEL_29:
  if ( v5 )
    *v5 = v8;
  return 0LL;
}
