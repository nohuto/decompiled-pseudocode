void __fastcall VectorSubchannelMaskInfo::WriteSubchannelString(
        VectorSubchannelMaskInfo *this,
        __int64 a2,
        unsigned __int16 *a3)
{
  unsigned __int8 v3; // dl
  int v4; // ebx
  size_t v5; // r11
  unsigned __int16 *v6; // r10
  int v8; // edx
  int v9; // edx
  int v10; // edx
  const unsigned __int16 *v11; // r8
  HRESULT v12; // eax
  unsigned __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v3 = *((_BYTE *)this + 4);
  v4 = 0;
  v5 = 49LL;
  v6 = a3;
  v13[0] = 49LL;
  if ( v3 )
  {
    while ( 1 )
    {
      v8 = (*((unsigned __int8 *)this + 8) >> (2 * (v3 - v4) - 2)) & 3;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
            v11 = v10 == 1 ? L"W" : 0LL;
          else
            v11 = L"Z";
        }
        else
        {
          v11 = L"Y";
        }
      }
      else
      {
        v11 = L"X";
      }
      v12 = StringCchCatExW(v6, v5, v11, &v15, v13);
      if ( v12 < 0 )
        ModuleFailFastForHRESULT(v12, retaddr);
      ++v4;
      v3 = *((_BYTE *)this + 4);
      if ( v4 >= v3 )
        break;
      v6 = v15;
      v5 = v13[0];
    }
  }
}
