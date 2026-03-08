/*
 * XREFs of ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180281D94
 * Callers:
 *     ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x180280F90 (-GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractio.c)
 *     ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x180281170 (-GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A3BE4 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18026DCC0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x1802B79EC (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 */

__int64 __fastcall CInteractionContextWrapper::TransformOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        const struct InteractionOutput *a3,
        struct InteractionOutput *a4)
{
  unsigned int v8; // ebx
  const struct DEVICE_INFO *v9; // rax
  int v10; // xmm1_4
  int v11; // xmm1_4
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+74h] [rbp+Ch]

  v8 = 0;
  v9 = CPointerDeviceCache::Query(*((_QWORD *)this + 30));
  if ( *((_BYTE *)v9 + 48) )
  {
    CInteractionContextTransformHelper::TransformOutput(
      (CInteractionContextWrapper *)((char *)this + 328),
      a3,
      (const struct tagRECT *)v9 + 1,
      (const struct tagRECT *)v9,
      *((_DWORD *)this + 54),
      *((_BYTE *)this + 320),
      a4);
    v10 = *((_DWORD *)a4 + 11);
    v14 = *((_DWORD *)a4 + 10);
    v15 = v10;
    CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v14, (struct MilPoint2F *)v13, 1);
    v11 = v13[1];
    *((_DWORD *)a4 + 10) = v13[0];
    *((_DWORD *)a4 + 11) = v11;
    *((_DWORD *)a4 + 1) = *((_DWORD *)a3 + 1);
    *(_DWORD *)a4 = *(_DWORD *)a3;
    *((_DWORD *)a4 + 5) = *((_DWORD *)a3 + 5);
  }
  else
  {
    return (unsigned int)-2147418113;
  }
  return v8;
}
