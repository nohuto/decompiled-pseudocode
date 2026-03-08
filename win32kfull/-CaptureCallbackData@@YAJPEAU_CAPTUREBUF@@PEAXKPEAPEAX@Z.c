/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628
 * Callers:
 *     ClientEventCallback @ 0x1C000E778 (ClientEventCallback.c)
 *     xxxClientAddFontResourceW @ 0x1C003458C (xxxClientAddFontResourceW.c)
 *     ClientLoadLibrary @ 0x1C0034858 (ClientLoadLibrary.c)
 *     SfnINSTRINGNULL @ 0x1C0034A70 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0034FC0 (SfnINLPCREATESTRUCT.c)
 *     SfnCOPYDATA @ 0x1C0035B80 (SfnCOPYDATA.c)
 *     SfnINDEVICECHANGE @ 0x1C0043590 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C00DA380 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C01080C0 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C0108BE4 (xxxClientExpandStringW.c)
 *     xxxClientLoadMenu @ 0x1C0109AE8 (xxxClientLoadMenu.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0208B30 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0209610 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C020B760 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C020BB30 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C020BF00 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C020C3B0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C020F500 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSTRING @ 0x1C020FC00 (SfnINSTRING.c)
 *     SfnPOPTINLPUINT @ 0x1C0211250 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0211680 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0212AE0 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0212FB8 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0214CF4 (xxxClientExtTextOutW.c)
 *     xxxClientFindMnemChar @ 0x1C02150CC (xxxClientFindMnemChar.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0215A80 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0215E88 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  char *v7; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v7 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v7 )
    v9 = a2;
  v10 = &v7[a3];
  if ( &a2[a3] < v10 )
    v10 = &a2[a3];
  if ( v9 >= v10 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v7[(a3 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v7, a2, a3);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v7;
    }
    else
    {
      *a4 = (void *)(v7 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
