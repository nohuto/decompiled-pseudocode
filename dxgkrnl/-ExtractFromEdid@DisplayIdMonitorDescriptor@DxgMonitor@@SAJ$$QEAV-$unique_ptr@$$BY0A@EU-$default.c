__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
        unsigned __int8 **a1,
        unsigned int a2,
        __int64 *a3)
{
  unsigned __int64 ExtractedDisplayIdBlobSize; // rbp
  __int64 v7; // rax
  void *v8; // rbx
  unsigned __int8 *v9; // rdx
  int DisplayIdBlob; // eax
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+2Ch] [rbp-2Ch]
  int v19; // [rsp+34h] [rbp-24h]
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  ExtractedDisplayIdBlobSize = (unsigned int)EDID_V1_GetExtractedDisplayIdBlobSize(a2, *a1);
  v7 = operator new[](ExtractedDisplayIdBlobSize, 0x4D677844u, 256LL);
  v20 = (void *)v7;
  v8 = (void *)v7;
  if ( !v7 )
    goto LABEL_7;
  v9 = *a1;
  v18 = 0LL;
  v19 = 0;
  v16 = v7;
  v17 = ExtractedDisplayIdBlobSize;
  DisplayIdBlob = EDID_V1_ExtractDisplayIdBlob(a2, v9, (struct DisplayIDObj *)&v16);
  v11 = DisplayIdBlob;
  if ( DisplayIdBlob < 0 )
  {
LABEL_3:
    WdLogSingleEntry1(2LL, v11);
    goto LABEL_4;
  }
  v13 = operator new[](0x30uLL, 0x4D677844u, 256LL);
  if ( !v13 )
  {
LABEL_7:
    v11 = -1073741801LL;
    goto LABEL_3;
  }
  v14 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v13, &v20, v17);
  if ( !v14 )
  {
    v8 = v20;
    goto LABEL_7;
  }
  v15 = (void (__fastcall ***)(_QWORD, __int64))*a3;
  *a3 = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  v8 = v20;
  LODWORD(v11) = 0;
LABEL_4:
  if ( v8 )
    operator delete(v8);
  return (unsigned int)v11;
}
