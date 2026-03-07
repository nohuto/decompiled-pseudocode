void CreateSetupNameArray()
{
  unsigned int ProfileValue; // eax
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rax
  int v3; // eax
  unsigned __int16 *v4; // rdi
  signed int v5; // ebx
  int v6; // edx
  int v7; // ecx
  unsigned __int16 *v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r9
  WCHAR *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax

  ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v1 = ProfileValue;
  if ( ProfileValue )
  {
    v2 = (unsigned __int16 *)Win32AllocPoolZInit(ProfileValue, 2020897621LL);
    glpSetupPrograms = v2;
    if ( v2 )
    {
      v3 = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, v2, v1, 0);
      if ( !v3 || v3 != v1 )
      {
        Win32FreePool(glpSetupPrograms);
        goto LABEL_25;
      }
      v4 = glpSetupPrograms;
      v5 = v1 >> 1;
      v6 = 0;
      v7 = 0;
      if ( v5 )
      {
        do
        {
          v8 = &glpSetupPrograms[v7];
          if ( *v8 )
          {
            ++v6;
            v9 = -1LL;
            do
              ++v9;
            while ( v8[v9] );
            v7 += v9;
          }
          ++v7;
        }
        while ( v7 < v5 );
      }
      giSetupExe = v6;
      gpastrSetupExe = (struct _UNICODE_STRING *)Win32AllocPoolZInit(16LL * v6, 2020897621LL);
      if ( !gpastrSetupExe )
      {
        Win32FreePool(glpSetupPrograms);
        giSetupExe = 0;
LABEL_25:
        glpSetupPrograms = 0LL;
        return;
      }
      v10 = 0;
      if ( v5 )
      {
        v11 = 0LL;
        do
        {
          v12 = &v4[v10];
          if ( *v12 )
          {
            v13 = -1LL;
            gpastrSetupExe[v11].Buffer = v12;
            do
              ++v13;
            while ( v12[v13] );
            gpastrSetupExe[v11].Length = 2 * v13;
            gpastrSetupExe[v11].MaximumLength = gpastrSetupExe[v11].Length + 2;
            ++v11;
            v14 = -1LL;
            do
              ++v14;
            while ( v12[v14] );
            v10 += v14;
          }
          ++v10;
        }
        while ( v10 < v5 );
      }
    }
  }
}
