_QWORD *__fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v4; // r10
  bool v5; // cf
  bool v6; // zf
  unsigned int v8; // r12d
  __int64 v9; // rbx
  _QWORD *AdapterByRequestLine; // rdi
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  int v15; // r13d
  unsigned __int64 v16; // rax
  char v17; // al
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r13
  __int64 *AdapterByDeviceObject; // rax
  int v22; // r9d
  unsigned int v23; // r12d
  char v24; // al
  __int64 DmaControllerByRequestLine; // rax
  int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // edx
  char v32; // [rsp+78h] [rbp-19h] BYREF
  char v33; // [rsp+79h] [rbp-18h]
  char v34; // [rsp+7Ah] [rbp-17h]
  char v35; // [rsp+7Bh] [rbp-16h]
  unsigned int v36; // [rsp+7Ch] [rbp-15h]
  unsigned int v37; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v38; // [rsp+84h] [rbp-Dh]
  unsigned int v39; // [rsp+88h] [rbp-9h]
  __int64 v40; // [rsp+90h] [rbp-1h]
  PMDL Mdl; // [rsp+98h] [rbp+7h]
  char v42; // [rsp+F8h] [rbp+67h]

  v4 = a2;
  v5 = *(_DWORD *)a1 < 3u;
  v6 = *(_DWORD *)a1 == 3;
  v32 = 0;
  Mdl = 0LL;
  v8 = 64;
  v34 = 0;
  if ( v6 )
  {
    v36 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v5 || !a3 || !*(_BYTE *)(a1 + 4) )
      return 0LL;
    if ( *(_BYTE *)(a1 + 11) )
    {
      v36 = 64;
    }
    else if ( *(_BYTE *)(a1 + 8) || (v36 = 24, *(_BYTE *)(a1 + 5)) )
    {
      v36 = 32;
    }
  }
  if ( !a2 )
    return 0LL;
  v9 = 0LL;
  v38 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v35 = 0;
    v11 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
    v38 = *(_DWORD *)(a1 + 48);
    v35 = 1;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v38);
    v40 = DmaControllerByRequestLine;
    v11 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v27);
    if ( !AdapterByRequestLine && !HalpDmaControllerValidateRequestLineBinding(v11, a1) )
      return 0LL;
    v4 = a2;
  }
  v12 = *(_BYTE *)(a1 + 4);
  v13 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v12 )
  {
    v14 = v36;
    v42 = *(_BYTE *)(a1 + 5);
    v39 = 0;
  }
  else
  {
    v28 = *(_DWORD *)(v11 + 48);
    v42 = 1;
    if ( v28 > 8 )
      v28 = 8;
    v14 = *(_DWORD *)(v11 + 76);
    v39 = v28;
    v36 = v14;
  }
  if ( v14 >= 0x20 )
  {
    v15 = 1;
LABEL_10:
    v33 = 1;
    goto LABEL_11;
  }
  v33 = 0;
  v15 = 0;
  if ( v12 )
    goto LABEL_10;
LABEL_11:
  HalpGetCacheCoherency(v40, v4, &v32);
  if ( v36 < 0x40 )
    v16 = (1LL << v36) - 1;
  else
    v16 = -1LL;
  if ( v16 < HalpMaximumPhysicalMemoryAddress )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    if ( v32 && v42 && !a3 )
    {
      v18 = 0;
      v37 = 0;
      v19 = 0;
      goto LABEL_18;
    }
  }
  if ( v15 )
  {
    if ( v42 && (v32 || !v17) )
      v8 = 512;
  }
  else
  {
    v8 = 16;
  }
  v18 = (v13 >> 12) + 1;
  v37 = v18;
  v29 = v18;
  if ( v18 > v8 )
  {
    v18 = v8;
    v29 = v8;
    v37 = v8;
  }
  v30 = dword_140C63F00;
  v19 = v29;
  if ( !v15 )
    v30 = dword_140C63E20;
  if ( !v33 )
  {
    v31 = v30 >> 13;
    if ( v29 > v31 )
    {
      v18 = v31;
      v37 = v31;
      v19 = v31;
    }
  }
LABEL_18:
  if ( v32 )
    goto LABEL_19;
  Mdl = IoAllocateMdl(0LL, v19 << 12, 0, 0, 0LL);
  if ( !Mdl )
    return 0LL;
  v18 = v37;
LABEL_19:
  if ( AdapterByRequestLine )
  {
    if ( v18 > *((_DWORD *)AdapterByRequestLine + 58) )
      *((_DWORD *)AdapterByRequestLine + 58) = v18;
    AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
    goto LABEL_30;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  v20 = v40;
  if ( v35 )
  {
    AdapterByRequestLine = HalpFindAdapterByRequestLine(v40, v38);
    if ( AdapterByRequestLine )
    {
      if ( v37 > *((_DWORD *)AdapterByRequestLine + 58) )
        *((_DWORD *)AdapterByRequestLine + 58) = v37;
      AdapterByRequestLine[57] = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_29;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(a2);
  AdapterByRequestLine = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
    goto LABEL_22;
  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject) != 3 )
  {
    ObfDereferenceObject(AdapterByRequestLine);
    v34 = 1;
LABEL_22:
    v23 = v36;
    goto LABEL_23;
  }
  v23 = v36;
  if ( !*(_BYTE *)(a1 + 4)
    || *(_BYTE *)(a1 + 5) != *((_BYTE *)AdapterByRequestLine + 442)
    || *(_BYTE *)(a1 + 9) != *((_BYTE *)AdapterByRequestLine + 444)
    || v36 != *((_DWORD *)AdapterByRequestLine + 112) )
  {
    if ( !HalpDmaIsAutomaticDomain(AdapterByRequestLine[64]) || *((_DWORD *)AdapterByRequestLine + 130) == 3 || a3 == 3 )
    {
      ObfDereferenceObject(AdapterByRequestLine);
LABEL_87:
      KeSetEvent(&HalpNewAdapter, 0, 0);
      return 0LL;
    }
    *((_BYTE *)AdapterByRequestLine + 524) = 1;
    ObfDereferenceObject(AdapterByRequestLine);
    v34 = 1;
LABEL_23:
    LOBYTE(v22) = v42;
    AdapterByRequestLine = (_QWORD *)HalpDmaAllocateChildAdapterV3(
                                       v37,
                                       v13,
                                       v23,
                                       v22,
                                       *(_BYTE *)(a1 + 4),
                                       v33,
                                       v32,
                                       v39,
                                       v9,
                                       a3,
                                       a2,
                                       0,
                                       (__int64)&v37);
    if ( AdapterByRequestLine )
    {
      v6 = v35 == 0;
      *((_BYTE *)AdapterByRequestLine + 524) = v34;
      if ( v6 )
      {
        AdapterByRequestLine[66] = a2;
        HalpAddAdapterToList((__int64)AdapterByRequestLine);
      }
      else
      {
        HalpAddAdapterToSystemList(v20, (__int64)AdapterByRequestLine);
        *((_DWORD *)AdapterByRequestLine + 96) = v38;
        *((_DWORD *)AdapterByRequestLine + 95) = *(_DWORD *)(a1 + 16);
        AdapterByRequestLine[46] = v20;
        *((_DWORD *)AdapterByRequestLine + 113) = *(_DWORD *)(a1 + 24);
        ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      }
      v24 = v37;
      if ( v37 )
      {
        *((_DWORD *)AdapterByRequestLine + 58) = v37;
        v24 = 1;
      }
      else
      {
        *((_DWORD *)AdapterByRequestLine + 58) = (v13 >> 12) + 1;
      }
      *((_BYTE *)AdapterByRequestLine + 440) = v24;
      AdapterByRequestLine[39] = 0LL;
      goto LABEL_29;
    }
    goto LABEL_87;
  }
LABEL_29:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_30:
  *((_BYTE *)AdapterByRequestLine + 443) = *(_BYTE *)(a1 + 7);
  *((_BYTE *)AdapterByRequestLine + 444) = 0;
  if ( *(_DWORD *)a1 )
    *((_BYTE *)AdapterByRequestLine + 444) = *(_BYTE *)(a1 + 9);
  *a4 = *((_DWORD *)AdapterByRequestLine + 58);
  AdapterByRequestLine[38] = Mdl;
  return AdapterByRequestLine;
}
