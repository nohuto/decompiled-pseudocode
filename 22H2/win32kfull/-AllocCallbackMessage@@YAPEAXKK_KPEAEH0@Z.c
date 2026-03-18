/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84
 * Callers:
 *     ClientEventCallback @ 0x1C000F4B8 (ClientEventCallback.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0011B20 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C001F60C (xxxClientLoadMenu.c)
 *     xxxClientExpandStringW @ 0x1C0020288 (xxxClientExpandStringW.c)
 *     SfnPOWERBROADCAST @ 0x1C00206D0 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadStringW @ 0x1C0022098 (xxxClientLoadStringW.c)
 *     xxxClientLoadImage @ 0x1C0022330 (xxxClientLoadImage.c)
 *     SfnCOPYDATA @ 0x1C0022620 (SfnCOPYDATA.c)
 *     xxxClientAddFontResourceW @ 0x1C0022B88 (xxxClientAddFontResourceW.c)
 *     ClientLoadLibrary @ 0x1C0023120 (ClientLoadLibrary.c)
 *     SfnOUTSTRING @ 0x1C00B2C40 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C020576C (ClientGetListboxString.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205F60 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0206A40 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C02074C0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0207A40 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0208B90 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0208F60 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0209330 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C02097E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C020C930 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSTRING @ 0x1C020D030 (SfnINSTRING.c)
 *     SfnPOPTINLPUINT @ 0x1C020E680 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C020EAB0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C020FF10 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C02103E8 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     xxxClientFindMnemChar @ 0x1C0212504 (xxxClientFindMnemChar.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212EB8 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02132C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
          goto LABEL_10;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset_0(a4, 0, Size);
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
LABEL_10:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
