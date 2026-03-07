__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int *v4; // rdi
  __int64 v5; // r8
  unsigned __int16 *v6; // rbp
  unsigned __int64 v7; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int *Pool2; // rax
  int v16; // edx
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d

  *a2 = 0;
  *a3 = 0LL;
  v4 = a2;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = (unsigned __int16)a1[1];
    v6 = a1 + 2;
    v7 = (unsigned __int64)a1 + v5 + 4;
    v8 = 0;
    v9 = 0LL;
    v10 = v6;
    if ( (unsigned __int64)v6 >= v7 )
    {
LABEL_15:
      v14 = 40 * v8 + 8;
      *v4 = v14;
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, v14, 1315988289LL);
      *a3 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v8;
        v17 = AcpiConvertMethodArgumentsToObjData(v6, v9, v8, (__int64)*a3 + 8);
        if ( v17 >= 0 )
          return (unsigned int)v17;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
      }
      else
      {
        v17 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            21,
            28,
            (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
            *v4,
            154);
        }
        *v4 = 0;
      }
    }
    else
    {
      while ( *v10 <= 4u )
      {
        LODWORD(a2) = v10[1];
        if ( (unsigned __int16)a2 > (unsigned __int16)v5 )
          break;
        v11 = 4LL;
        if ( (unsigned __int16)a2 >= 4u )
          v11 = v10[1];
        v12 = v10[1];
        if ( (unsigned __int64)v10 + v11 + 4 > v7 )
          break;
        ++v8;
        v13 = v10[1];
        if ( (unsigned __int16)a2 < 4u )
          v13 = 4LL;
        v9 += v13 + 4;
        if ( (unsigned __int16)a2 < 4u )
          v12 = 4LL;
        v10 = (unsigned __int16 *)((char *)v10 + v12 + 4);
        if ( (unsigned __int64)v10 >= v7 )
          goto LABEL_15;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_DDD(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          21,
          27,
          (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
          *v10,
          v10[1],
          v5);
      }
      v17 = -1073741788;
    }
  }
  else
  {
    v17 = -1073741811;
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *v4 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v17;
}
