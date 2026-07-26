/*
 * XREFs of ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AF384
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AF990 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x1C00B0030 (NdisFDirectOidRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C002C710 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFADC (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4)
{
  struct _NDIS_FILTER_BLOCK *v4; // r14
  int v6; // edi
  struct _NDIS_FILTER_BLOCK *NextDirectRequestHandle; // rbx
  KIRQL v11; // dl
  unsigned int v12; // ebx
  bool v13; // al
  KIRQL v14; // dl
  __int64 v16; // [rsp+40h] [rbp-21h]
  _QWORD Parameter[4]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+27h]
  KIRQL NewIrql; // [rsp+C8h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+77h] BYREF

  v4 = 0LL;
  v6 = 0;
  v21 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
  if ( a3 )
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a3->NextDirectRequestHandle;
  else
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a2->Next.DirectRequestHandle;
  if ( !a4 )
    goto LABEL_21;
  if ( ndisReferenceRefEx(&a4->PnPRef.SpinLock, 0x12u, (enum _NDIS_REFERENCE_STATUS *)&v21) )
  {
    if ( a4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
    {
      NextDirectRequestHandle = a4;
    }
    else if ( a4->NextDirectRequestHandle )
    {
      NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)a4->NextDirectRequestHandle;
    }
    ndisDereferenceRef(&a4->PnPRef.SpinLock, 0x12u);
  }
  else if ( v21 != 1 )
  {
    v11 = NewIrql;
    v12 = -1073741823;
    if ( v21 == 2 )
      v12 = -1073741670;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v11);
LABEL_37:
    if ( v12 == 259 )
      goto LABEL_40;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v6 = 0;
    v21 = 0;
LABEL_21:
    if ( NextDirectRequestHandle->Header.Type != 5 )
      break;
    v4 = NextDirectRequestHandle;
    v13 = ndisReferenceRefEx(&NextDirectRequestHandle->PnPRef.SpinLock, 0x10u, (enum _NDIS_REFERENCE_STATUS *)&v21);
    v6 = v21;
    if ( v13 || v21 != 1 )
      break;
    NextDirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)NextDirectRequestHandle->NextDirectRequestHandle;
    v4 = 0LL;
  }
  v14 = NewIrql;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v14);
  if ( v6 )
  {
    v12 = -1073741823;
    if ( v6 == 2 )
      v12 = -1073741670;
    goto LABEL_40;
  }
  if ( (!v4 || v4->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler)
    && a2->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
  {
    if ( v4 )
    {
      Parameter[0] = 0LL;
      Parameter[1] = v4;
      Parameter[2] = 0LL;
      Parameter[3] = a1;
      v18 = 0LL;
      v19 = 0LL;
      v12 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoDirectOidRequestInternal, Parameter, 0x4CCCuLL, 0, 0LL) >= 0 )
        v12 = Parameter[0];
    }
    else if ( ndisReferenceMiniport(a2, 0x49u) )
    {
      v12 = ndisMDoDirectOidRequest(a2, a1, 0);
      ndisDereferenceMiniport(a2, 0x49u);
    }
    else
    {
      v12 = -1073741823;
    }
    goto LABEL_37;
  }
  v12 = -1073741637;
LABEL_38:
  if ( v4 )
    ndisDereferenceRef(&v4->PnPRef.SpinLock, 0x10u);
LABEL_40:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      (char)a2,
      v16);
  }
  return v12;
}
