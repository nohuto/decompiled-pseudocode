/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802381B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(__int64 a1, unsigned int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  float *v5; // rbx
  unsigned int v6; // ebx

  if ( a3 == 18 && (v4 = *a4, a2 < 0x10) && (v5 = (float *)(a1 + 4 * (a2 + 40LL))) != 0LL )
  {
    if ( *v5 != v4 )
    {
      *v5 = v4;
      CResource::NotifyOnChanged(a1, 0, 0LL);
    }
    return v5 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x44u, 0LL);
  }
  return v6;
}
