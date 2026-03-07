_BYTE *__fastcall RtlApplyImportRelocationToImage(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        int a7,
        char a8)
{
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  __int16 v13; // [rsp+4Ch] [rbp-2Ch]

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  RtlpConstructImportRelocationFixup(a5 + (*a6 & 0xFFF), a3, a4, a6, a7, a8, (__int64)&v11);
  return RtlpApplyGenericRetpolineFixup(a1, a2, &v11, a5 + (*a6 & 0xFFF));
}
