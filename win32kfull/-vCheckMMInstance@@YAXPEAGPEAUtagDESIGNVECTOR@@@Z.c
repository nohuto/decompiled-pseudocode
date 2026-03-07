void __fastcall vCheckMMInstance(unsigned __int16 *a1, struct tagDESIGNVECTOR *a2)
{
  unsigned __int16 *v3; // rbx
  wchar_t v4; // ax
  unsigned __int16 Src[264]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v6[528]; // [rsp+240h] [rbp-238h] BYREF

  *((_DWORD *)a2 + 1) = 0;
  v3 = a1;
  while ( 1 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    ++v3;
    if ( v4 == 40 )
    {
      if ( *v3 && !_wcsicmp(v3, L"OpenType)") && (int)RtlStringCchCopyNW(Src, 0x104uLL, a1, v3 - a1 - 1) >= 0 )
        GreGetCannonicalName(Src, v6);
      return;
    }
  }
}
