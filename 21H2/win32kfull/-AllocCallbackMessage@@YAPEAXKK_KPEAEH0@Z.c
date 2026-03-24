/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E680 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00209C0 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0020D98 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0020FF0 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C0021BCC (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0022080 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022900 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0022C30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C00237E0 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0023E20 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C00242FC (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C002525C (xxxClientExpandStringW.c)
 *     SfnINSTRINGNULL @ 0x1C004FE90 (SfnINSTRINGNULL.c)
 *     SfnINSTRING @ 0x1C011EEF0 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C01594E8 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159810 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C015A484 (ClientGetListboxString.c)
 *     ClientEventCallback @ 0x1C02288A8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0228CA0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C02295E0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C022A180 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A7A0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022B410 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B880 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022BCE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022C220 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022E050 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F7C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022FC80 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0230970 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02328B0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232F9C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233404 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C016E780 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_8;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_8:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
