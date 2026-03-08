/*
 * XREFs of WppTraceCallback @ 0x1C007C3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rbp
  unsigned int v14; // edi
  __int64 v15; // rax
  const void **v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  _WORD *v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v7;
    if ( a1 == 8 )
    {
      v13 = a5;
      v14 = 0;
      v15 = a5;
      v16 = *(const void ***)(a5 + 32);
      do
      {
        v15 = *(_QWORD *)(v15 + 16);
        ++v14;
      }
      while ( v15 );
      if ( v14 <= 0x3F )
      {
        v17 = 32 * v14 + 24;
        if ( v16 )
        {
          v18 = 32 * v14 + 24;
          v17 += *(unsigned __int16 *)v16 + 2;
        }
        else
        {
          v18 = 0;
        }
        if ( v17 > a3 )
        {
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v17;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, a3);
          *a4 = v17;
          a4[2] = v18;
          a4[4] = v14;
          if ( v16 )
          {
            v19 = (_WORD *)((char *)a4 + v18);
            *v19 = *(_WORD *)v16;
            memmove(v19 + 1, v16[1], *(unsigned __int16 *)v16);
          }
          if ( v14 )
          {
            v20 = a4 + 10;
            v21 = v14;
            do
            {
              v22 = *(_OWORD *)*(_QWORD *)(v13 + 8);
              *v20 = 528384;
              v20 += 8;
              *((_OWORD *)v20 - 3) = v22;
              *(_BYTE *)(v13 + 41) = 0;
              *(_DWORD *)(v13 + 44) = 0;
              v13 = *(_QWORD *)(v13 + 16);
              --v21;
            }
            while ( v21 );
          }
          *v6 = v17;
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v10 = a5;
  v25 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v11 = *(_DWORD **)(v10 + 8);
    if ( *v11 == a4[6] && v11[1] == a4[7] && v11[2] == a4[8] && v11[3] == a4[9] )
      break;
    v10 = *(_QWORD *)(v10 + 16);
  }
  while ( v10 );
  if ( !v10 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v10 + 44) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_BYTE *)(v10 + 41) = 0;
  }
  else
  {
    v12 = WPPTraceSuite == 2;
    v24 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v10 + 24) = v24;
    if ( v12 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v25,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v10 + 41) = v25;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v10 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v10 + 44) = HIDWORD(v24);
      *(_BYTE *)(v10 + 41) = BYTE2(v24);
    }
  }
  return v7;
}
