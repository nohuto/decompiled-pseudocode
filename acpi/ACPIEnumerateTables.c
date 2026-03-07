__int64 __fastcall ACPIEnumerateTables(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // edx
  _DWORD **v9; // r9
  __int64 v10; // r10
  _DWORD *v11; // rax

  v4 = 0;
  v5 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v5 && (v7 = *v5) != 0 )
  {
    v8 = 4 * v7;
    if ( a2 )
    {
      if ( *a2 >= v8 )
      {
        if ( v7 )
        {
          v9 = (_DWORD **)(v5 + 2);
          v10 = *v5;
          do
          {
            v11 = *v9++;
            *a1++ = *v11;
            --v10;
          }
          while ( v10 );
        }
        *a2 = v8;
      }
      else
      {
        *a2 = v8;
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        30,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  return v4;
}
