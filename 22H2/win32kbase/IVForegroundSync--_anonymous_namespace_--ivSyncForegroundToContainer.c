/*
 * XREFs of IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C01EF938
 * Callers:
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF59C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0130920 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4CB0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(struct CONTAINER_ID *a1, int a2)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  float *v6; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v8; // [rsp+30h] [rbp-68h]
  float v9[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+B0h] [rbp+18h] BYREF
  char v11; // [rsp+B8h] [rbp+20h] BYREF

  CIVGenericSerializer::CIVGenericSerializer(v7);
  v4 = v8;
  if ( v8 )
  {
    *v8 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v4 + 2) = a2;
    memset(v9, 0, sizeof(v9));
    v5 = 0xFFFF8300FFFF8300uLL;
    if ( CDesktopInputSink::GetTransform((struct tagINPUT_TRANSFORM *)v9) )
    {
      v10 = _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
      v6 = (float *)InverseTransformPoint((__int64)&v11, (float *)&v10, v9);
      v10 = __PAIR64__((int)v6[1], (int)*v6);
      v5 = v10;
    }
    *(_QWORD *)((char *)v4 + 12) = v5;
    ivrIVSend((const struct CIVSerializer *)v7, 3u, a1);
  }
  v7[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v7);
}
