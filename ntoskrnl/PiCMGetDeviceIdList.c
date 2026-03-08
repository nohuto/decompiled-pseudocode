/*
 * XREFs of PiCMGetDeviceIdList @ 0x14077813C
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14055D19C (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     PiCMConvertDeviceListFilters @ 0x1407783AC (PiCMConvertDeviceListFilters.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140778448 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMCaptureDeviceListInputData @ 0x14077854C (PiCMCaptureDeviceListInputData.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceRelationsList @ 0x14084ECA4 (_CmGetDeviceRelationsList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *Pool2; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // r10d
  signed int DeviceRelationsList; // ebx
  int v15; // r10d
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  char (__fastcall *v19)(int, int, int, __int64); // r9
  bool v20; // sf
  int v21; // edx
  int v22; // eax
  const wchar_t *v24; // rcx
  int v25; // [rsp+58h] [rbp-19h] BYREF
  int v26; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+7h] BYREF

  v25 = 0;
  v28 = 0LL;
  v26 = 0;
  Pool2 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  *a6 = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  v27 = 0LL;
  v9 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v27);
  if ( v9 < 0 )
    goto LABEL_23;
  v11 = DWORD1(v27);
  if ( (byte_140C0E10B & 2) != 0 )
  {
    if ( WORD2(v27) )
    {
      switch ( WORD2(v27) )
      {
        case 1u:
          v24 = L"Enum";
          break;
        case 2u:
          v24 = L"Service";
          break;
        case 4u:
          v24 = L"EjectRelations";
          break;
        case 8u:
          v24 = L"RemovalRelations";
          break;
        case 0x10u:
          v24 = L"PowerRelations";
          break;
        case 0x20u:
          v24 = L"BusRelations";
          break;
        case 0x40u:
          v24 = L"TransportRelations";
          break;
        case 0x80u:
          v24 = L"Class";
          break;
        default:
          v24 = L"Unknown";
          break;
      }
    }
    else
    {
      v24 = L"None";
    }
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v24,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Start,
      v10,
      *((const wchar_t **)&v27 + 1),
      v24,
      BYTE6(v27) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
    goto LABEL_32;
  }
  if ( (v11 & 0x20000) != 0 && !PiAuDoesClientHaveAccess(2u) )
  {
    DeviceRelationsList = -1073741790;
    goto LABEL_32;
  }
  v12 = 0;
  if ( a4 - 20 >= 2 )
    v12 = a4 - 20;
  if ( v12 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v12, 879783504LL);
    if ( !Pool2 )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_32;
    }
    v13 = v12 >> 1;
  }
  else
  {
    v13 = 0;
  }
  v25 = v13;
  DeviceRelationsList = PiCMConvertDeviceListFilters(v11, &v26);
  if ( DeviceRelationsList < 0 )
    goto LABEL_32;
  v16 = (unsigned int)(unsigned __int16)v11 - 4;
  if ( (unsigned int)v16 <= 0x3C && (v17 = 0x1000000010001011LL, _bittest64(&v17, v16)) )
  {
    if ( !*((_QWORD *)&v27 + 1) )
    {
      DeviceRelationsList = -1073741811;
      goto LABEL_32;
    }
    DeviceRelationsList = CmGetDeviceRelationsList(
                            PiPnpRtlCtx,
                            DWORD2(v27),
                            v26 & 0xFFFFFEFF,
                            (_DWORD)Pool2,
                            v15,
                            (__int64)&v25);
    v20 = DeviceRelationsList < 0;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
    LODWORD(v19) = 0;
    if ( (v11 & 0x20000) != 0 )
      p_SubjectContext = 0LL;
    else
      v19 = PiCMMandatoryFilterCallback;
    DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                            PiPnpRtlCtx,
                            DWORD2(v27),
                            v26,
                            (_DWORD)v19,
                            (__int64)p_SubjectContext,
                            (__int64)Pool2,
                            v25,
                            (__int64)&v25);
    SeReleaseSubjectContext(&SubjectContext);
    v20 = DeviceRelationsList < 0;
  }
  if ( !v20 )
  {
    v21 = v25;
    if ( v25 )
    {
LABEL_20:
      v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v21, 0, Pool2, 2 * v21, SHIDWORD(v28), a3, a4, a6);
      goto LABEL_21;
    }
    v25 = 1;
    if ( v12 >= 2 )
    {
      *Pool2 = 0;
      v21 = v25;
      goto LABEL_20;
    }
    DeviceRelationsList = -1073741789;
  }
LABEL_32:
  v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v25, 0, 0LL, 0, SHIDWORD(v28), a3, a4, a6);
LABEL_21:
  v9 = v22;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_23:
  if ( *((_QWORD *)&v27 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v27 + 1));
  if ( (byte_140C0E10B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Stop, v10, v9);
  return (unsigned int)v9;
}
