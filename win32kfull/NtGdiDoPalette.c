/*
 * XREFs of NtGdiDoPalette @ 0x1C00D3F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(HPALETTE a1, __int64 a2, __int64 a3, char *a4, unsigned int a5)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  BOOL v8; // r12d
  struct tagPALETTEENTRY *v9; // rsi
  int v10; // eax
  size_t v12; // r8
  ULONG64 v13; // rcx
  HPALETTE v14; // [rsp+90h] [rbp+8h]
  unsigned __int16 v15; // [rsp+98h] [rbp+10h]

  v15 = a2;
  v14 = a1;
  v6 = (unsigned __int16)a3;
  v7 = 0;
  v8 = 1;
  v9 = 0LL;
  if ( a5 > 5 )
    return v7;
  if ( !*((_DWORD *)&off_1C030B4B0 + 4 * a5 + 2) )
  {
    if ( a4 )
    {
      if ( (_WORD)a3 )
      {
        v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)(unsigned __int16)a3);
        v8 = v9 != 0LL;
        a2 = v15;
        a1 = v14;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v8 )
    {
      v10 = (*(&off_1C030B4B0 + 2 * a5))(a1, (unsigned __int16)a2, v6, v9);
      v7 = v10;
      if ( (int)v6 < v10 )
        v10 = v6;
      if ( v10 > 0 && a4 )
      {
        v12 = 4LL * v10;
        if ( (unsigned __int64)&a4[v12] > MmUserProbeAddress || &a4[v12] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, v12);
      }
    }
    goto LABEL_10;
  }
  if ( (_WORD)a3 )
  {
    v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)(unsigned __int16)a3);
    if ( !v9 )
      goto LABEL_10;
    v13 = (ULONG64)&a4[4 * v6];
    if ( v13 < (unsigned __int64)a4 || v13 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, a4, 4 * v6);
    LOWORD(a2) = v15;
    a1 = v14;
  }
  v7 = (*(&off_1C030B4B0 + 2 * a5))(a1, (unsigned __int16)a2, (unsigned __int16)v6, v9);
LABEL_10:
  if ( v9 )
    FreeTmpBuffer(v9, a2, a3);
  return v7;
}
