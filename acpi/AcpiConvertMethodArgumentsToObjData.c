__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r14d
  unsigned __int64 v8; // r12
  __int64 i; // rsi
  __int64 v11; // r8
  int v12; // ebx
  __int16 v13; // cx
  __int64 Pool2; // rax
  int v15; // edx
  size_t v16; // r8
  void *v17; // rcx
  int v18; // eax
  __int64 v19; // rax

  v4 = 0LL;
  v5 = 0;
  v8 = a2;
  if ( !a3 )
    return 0;
  for ( i = a4 + 2; ; i += 40LL )
  {
    v11 = a1[1];
    if ( v11 + v4 > v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDPP(WPP_GLOBAL_Control->DeviceExtension, a2, v11, 1);
LABEL_28:
      v12 = -1073741788;
      goto LABEL_29;
    }
    if ( !*a1 )
    {
      if ( (unsigned int)v11 > 8 )
        goto LABEL_28;
      *(_WORD *)i = 1;
      v17 = (void *)(i + 14);
      v18 = a1[1];
      *(_QWORD *)(i + 14) = 0LL;
      *(_DWORD *)(i + 22) = v18;
      v16 = a1[1];
      goto LABEL_18;
    }
    if ( *a1 == 1 || *a1 == 2 || (unsigned int)*a1 - 3 > 1 )
      break;
    *(_WORD *)i = 4;
    v12 = AcpiConvertPackageArgumentToPackageObj(a1, i + 22, i + 30, 1LL);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          21,
          25,
          (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
          (char)a1,
          a1[1]);
      }
      goto LABEL_29;
    }
LABEL_19:
    v19 = a1[1];
    v4 += v19;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    ++v5;
    a1 = (unsigned __int16 *)((char *)a1 + v19 + 4);
    if ( v5 >= a3 )
      return 0;
  }
  if ( *a1 == 1 )
    v13 = 2;
  else
    v13 = 3;
  *(_WORD *)i = v13;
  *(_DWORD *)(i + 22) = a1[1];
  Pool2 = ExAllocatePool2(64LL, a1[1], 1315988289LL);
  *(_QWORD *)(i + 30) = Pool2;
  if ( Pool2 )
  {
    v16 = *(unsigned int *)(i + 22);
    v17 = (void *)Pool2;
LABEL_18:
    memmove(v17, a1 + 2, v16);
    goto LABEL_19;
  }
  v12 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      21,
      26,
      (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a1[1],
      154);
  }
LABEL_29:
  AcpiCleanupObjDataArguments(a4, a3);
  return (unsigned int)v12;
}
