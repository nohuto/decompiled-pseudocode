/*
 * XREFs of sub_1801134D0 @ 0x1801134D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001648 @ 0x180001648 (sub_180001648.c)
 *     sub_180112F14 @ 0x180112F14 (sub_180112F14.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_1801134D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  volatile signed __int64 *v17; // rcx
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  char v25; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+168h] [rbp+60h] BYREF

  v6 = a1 + 120;
  v11 = sub_180114548((char *)(a1 + 120));
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v11;
  v13 = (void *)v11;
  if ( v12 )
  {
    o__aligned_free(v12);
    v13 = *(void **)(a1 + 112);
  }
  sub_1801136A0(v13);
  sub_1801147FC(v13);
  v14 = (volatile signed __int64 *)sub_180112F14(v6, 0LL);
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v14;
  if ( v15 )
  {
    o__aligned_free(v15);
    v14 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v14 + 18, 0LL);
  result = sub_1801147FC((void *)v14);
  if ( (unsigned int)dword_18020DB10 > 5 && (qword_18020DB20 & 0x400000000000LL) != 0 )
  {
    result = qword_18020DB28 & 0x400000000000LL;
    if ( (qword_18020DB28 & 0x400000000000LL) == qword_18020DB28 )
    {
      v17 = *(volatile signed __int64 **)(a1 + 112);
      v18 = a6;
      v19 = a5;
      v22 = *a2;
      v23 = *(_QWORD *)(a1 + 16);
      v20 = a4;
      v21 = a3;
      LODWORD(v26) = 1;
      if ( v17 )
      {
        _InterlockedExchangeAdd64(v17 + 18, 0LL);
        sub_1801147FC((void *)v17);
      }
      else
      {
        v25 = 0;
      }
      v24 = (__int64)&v25;
      return sub_180001648(
               (int)&dword_18020DB10,
               (int)&dword_1801E7C88,
               0,
               0,
               (void **)&v24,
               (__int64)&v26,
               &v23,
               &v22,
               (void **)&v21,
               (void **)&v20,
               (void **)&v19,
               (void **)&v18);
    }
  }
  return result;
}
