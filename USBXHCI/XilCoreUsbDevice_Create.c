__int64 __fastcall XilCoreUsbDevice_Create(__int64 a1, char a2, __int64 a3, int a4)
{
  char v5; // si
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v15; // r9d

  *(_QWORD *)a3 = a1;
  v5 = a1;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a3 + 16) = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 120);
  v9 = *(_QWORD *)(v7 + 88);
  v10 = XilCommonBuffer_AcquireBufferEx(v8, (*(_DWORD *)(v9 + 104) & 4) != 0 ? 2048 : 1024, a3, 829842756, a4);
  v12 = 0;
  *(_QWORD *)(a3 + 24) = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 10;
LABEL_8:
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL),
        v11,
        12,
        v15,
        (__int64)&WPP_f8e75bf2f10b39d5032be5307a2d772a_Traceguids,
        v5);
    }
LABEL_9:
    v12 = -1073741670;
    XilCoreUsbDevice_FreeResources(a3);
    return v12;
  }
  v13 = XilCommonBuffer_AcquireBufferEx(
          v8,
          (*(_DWORD *)(v9 + 104) & 4) != 0 ? 2112 : 1056,
          a3,
          846619972,
          (unsigned int)(a2 != 0) + 1);
  *(_QWORD *)(a3 + 32) = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 11;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  return v12;
}
