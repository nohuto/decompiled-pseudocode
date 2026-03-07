void __fastcall CDwmAppHost::OnSettingChange(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // edx

  if ( a2 )
  {
    if ( a2 == 6 || a2 == 42 )
    {
      this = (CDwmAppHost *)(unsigned int)-(a3 != 0LL);
      v3 = a3 != 0LL ? 3 : 0;
      if ( !a3 )
        return;
      goto LABEL_17;
    }
    if ( a2 != 47 )
    {
      if ( a2 == 67 )
      {
        v3 = 2048;
      }
      else
      {
        if ( a2 != 8217 )
          return;
        v3 = 256;
      }
      goto LABEL_17;
    }
    if ( a3 && !(unsigned int)_o__wcsicmp(a3, L"devices") )
    {
      v3 = 3;
LABEL_17:
      CDwmAppHost::LpcNotifySettingsChange(this, v3, a3);
    }
  }
  else if ( a3 && !wcscmp_0((const wchar_t *)a3, L"ImmersiveColorSet") )
  {
    v3 = 16;
    goto LABEL_17;
  }
}
