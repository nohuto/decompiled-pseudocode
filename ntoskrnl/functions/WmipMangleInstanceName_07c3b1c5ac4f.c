__int64 __fastcall WmipMangleInstanceName(_QWORD *a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  NTSTATUS v7; // esi
  const wchar_t *v8; // r11
  volatile signed __int64 *GEByGuid; // rbp
  __int16 v10; // bx
  size_t i; // rdi
  volatile signed __int64 *ISinGEbyName; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  size_t v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v14 = 0;
  v15[0] = 0LL;
  v7 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, v15);
  if ( v7 >= 0 )
  {
    RtlStringCchCopyW(a4, a3, v8);
    v7 = 0;
    GEByGuid = WmipFindGEByGuid(a1, 0);
    if ( GEByGuid )
    {
      v10 = 90;
      for ( i = v15[0] - 1; ; a4[i] = v10 )
      {
        ISinGEbyName = (volatile signed __int64 *)WmipFindISinGEbyName(GEByGuid, a4, &v14);
        if ( !ISinGEbyName )
          break;
        WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISinGEbyName);
        if ( v10 == 90 )
        {
          v10 = 65;
          if ( ++i == a3 - 1 )
          {
            v7 = -1073741670;
            break;
          }
          a4[i + 1] = 0;
        }
        else
        {
          ++v10;
        }
      }
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
    }
  }
  return (unsigned int)v7;
}
