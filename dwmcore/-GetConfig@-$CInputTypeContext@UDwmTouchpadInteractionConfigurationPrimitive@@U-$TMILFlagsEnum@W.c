unsigned int *__fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int *v4; // r11
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // r10d
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  *a2 = a3;
  a2[1] = a3;
  v6 = 0LL;
  v4[2] = 0;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a1 + 112);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 12 * v6);
        if ( a3 < v10 )
          break;
        if ( a3 <= *(_DWORD *)(v9 + 12 * v6 + 4) )
        {
          v11 = *(_DWORD *)(v9 + 12 * v6 + 8);
          *(_QWORD *)v4 = *(_QWORD *)(v9 + 12 * v6);
          v4[2] = v11;
          break;
        }
        if ( a3 >= v10 )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 < v8 )
            continue;
        }
        break;
      }
    }
    anonymous_namespace_::GetTemporaryConfigWithMask(a4, &v13, &v14);
    v7 = v13 & v14 | v4[2] & ~v14;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
  }
  v4[2] = v7;
  return v4;
}
