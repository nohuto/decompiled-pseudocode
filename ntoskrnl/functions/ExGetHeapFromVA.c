ULONG_PTR __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  ULONG_PTR result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (_WORD)BugCheckParameter3 )
  {
    v2 = 0;
LABEL_3:
    v6 = 0x100000;
    v7 = 0x1000000;
    result = (BugCheckParameter3 & -(__int64)(unsigned int)*(&v6 + v2) ^ RtlpHpHeapGlobals ^ *(_QWORD *)((BugCheckParameter3 & -(__int64)(unsigned int)*(&v6 + v2)) + 0x10) ^ 0xA2E64EADA2E64EADuLL)
           - 192LL * v2
           - 320;
    goto LABEL_4;
  }
  v4 = RtlCSparseBitmapBitmaskRead((__int64)&unk_140C70D90, 2 * ((BugCheckParameter3 - qword_140C70D88) >> 20));
  if ( v4 )
  {
    v2 = v4 - 1;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  v8 = 0LL;
  RtlpHpQueryVA(BugCheckParameter3, v5, &v8, &v6);
  result = *v8;
LABEL_4:
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
