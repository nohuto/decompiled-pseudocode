/*
 * XREFs of WppTraceCallback @ 0x1C000C660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00034C0 (memmove.c)
 *     memset @ 0x1C00037C0 (memset.c)
 */

__int64 __fastcall WppTraceCallback(
        char a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rax
  const void **v13; // r15
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  _WORD *v16; // rcx
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rdi
  _DWORD *v21; // rcx
  bool v22; // zf
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  switch ( a1 )
  {
    case 4:
    case 5:
      v20 = a5;
      v25 = 0;
      LODWORD(a6) = 0;
      if ( a5 )
      {
        if ( a3 < 0x30 )
          goto LABEL_5;
        while ( 1 )
        {
          v21 = *(_DWORD **)(v20 + 8);
          if ( *v21 == a4[6] && v21[1] == a4[7] && v21[2] == a4[8] && v21[3] == a4[9] )
            break;
          v20 = *(_QWORD *)(v20 + 16);
          if ( !v20 )
            return (unsigned int)-1073741163;
        }
        if ( a1 == 5 )
        {
          *(_DWORD *)(v20 + 44) = 0;
          *(_QWORD *)(v20 + 24) = 0LL;
          *(_BYTE *)(v20 + 41) = 0;
        }
        else
        {
          v22 = WPPTraceSuite == 2;
          v24 = *((_QWORD *)a4 + 1);
          *(_QWORD *)(v20 + 24) = v24;
          if ( v22 )
          {
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                                  3LL,
                                  &v25,
                                  4LL,
                                  &a6,
                                  a4) )
              *(_BYTE *)(v20 + 41) = v25;
            v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                   2LL,
                   v20 + 44,
                   4LL,
                   &a6,
                   a4);
          }
          else
          {
            *(_DWORD *)(v20 + 44) = HIDWORD(v24);
            *(_BYTE *)(v20 + 41) = BYTE2(v24);
          }
        }
      }
      else
      {
        v7 = -1073741163;
      }
      break;
    case 6:
    case 7:
      return v7;
    case 8:
      v10 = a5;
      v11 = 0;
      v12 = a5;
      v13 = *(const void ***)(a5 + 32);
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        ++v11;
      }
      while ( v12 );
      if ( v11 <= 0x3F )
      {
        v14 = 32 * v11 + 24;
        if ( v13 )
        {
          v15 = 32 * v11 + 24;
          v14 += *(unsigned __int16 *)v13 + 2;
        }
        else
        {
          v15 = 0;
        }
        if ( v14 > a3 )
        {
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v14;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, a3);
          *a4 = v14;
          a4[2] = v15;
          a4[4] = v11;
          if ( v13 )
          {
            v16 = (_WORD *)((char *)a4 + v15);
            *v16 = *(_WORD *)v13;
            memmove(v16 + 1, v13[1], *(unsigned __int16 *)v13);
          }
          if ( v11 )
          {
            v17 = a4 + 10;
            v18 = v11;
            do
            {
              v17 += 8;
              v19 = *(_OWORD *)*(_QWORD *)(v10 + 8);
              *(v17 - 8) = 528384;
              *((_OWORD *)v17 - 3) = v19;
              *(_BYTE *)(v10 + 41) = 0;
              *(_DWORD *)(v10 + 44) = 0;
              v10 = *(_QWORD *)(v10 + 16);
              --v18;
            }
            while ( v18 );
          }
          *v6 = v14;
        }
      }
      else
      {
LABEL_5:
        v7 = -1073741811;
      }
      break;
    default:
      v7 = -1073741808;
      break;
  }
  return v7;
}
