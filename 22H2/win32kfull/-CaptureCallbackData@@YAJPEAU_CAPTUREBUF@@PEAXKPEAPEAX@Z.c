/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E5E0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0020920 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0020CF8 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0020F50 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C0021B2C (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0021FE0 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022860 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0023740 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0023D80 (SfnCOPYDATA.c)
 *     xxxClientExpandStringW @ 0x1C00251BC (xxxClientExpandStringW.c)
 *     SfnINSTRINGNULL @ 0x1C004FDF0 (SfnINSTRINGNULL.c)
 *     SfnINSTRING @ 0x1C011EB70 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C0158F28 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C02282E8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02286E0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229020 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022AE50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B2C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B720 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BC60 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DA90 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F200 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022F6C0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02303B0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02322F0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C02329DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232E44 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, unsigned __int64 a2, unsigned int a3, void **a4)
{
  __int64 v5; // rax
  const void *v6; // r10
  char *v8; // rdi
  unsigned __int64 v10; // r8

  v5 = a3;
  v6 = (const void *)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = *((_QWORD *)a1 + 2);
  if ( a2 > (unsigned __int64)v8 )
    v10 = a2;
  if ( a2 + v5 >= (unsigned __int64)&v8[v5] )
    a2 = *((_QWORD *)a1 + 2);
  if ( v10 >= (unsigned int)v5 + a2 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)v5 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, v6, (unsigned int)v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
