/*
 * XREFs of ?vSolidFillRowWithCallback@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C0305B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSolidFillRowWithCallback(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  void (__fastcall *v5)(unsigned __int8 *, _QWORD, _DWORD *); // r14
  __int64 v8; // rsi
  int v10; // eax
  _DWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = (void (__fastcall *)(unsigned __int8 *, _QWORD, _DWORD *))*((_QWORD *)a4 + 1);
    v8 = a2;
    do
    {
      v11[0] = *(_DWORD *)a1;
      v10 = *((_DWORD *)a1 + 1);
      v11[1] = a3++;
      v11[2] = v10;
      v11[3] = a3;
      v5(a4, a5, v11);
      a1 = (struct _ROW *)((char *)a1 + 8);
      --v8;
    }
    while ( v8 );
  }
}
