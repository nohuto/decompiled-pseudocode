/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C009E538
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002E158 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0099B3C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009EB30 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001D940 (AMLIFreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x1C001F220 (AMLIIsNamedChildPresent.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091638 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0091750 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C009A20C (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C00A311C (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C00A3418 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 *a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v7; // rdi
  int v8; // ebx
  unsigned int *v10; // r12
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r15d
  int v15; // eax
  _QWORD *i; // rax
  _OWORD v17[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h]
  _OWORD v19[2]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int *v20; // [rsp+A0h] [rbp+2Fh]
  __int64 v21; // [rsp+D8h] [rbp+67h] BYREF

  v3 = (__int64 *)a1[90];
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  memset(v19, 0, sizeof(v19));
  memset(v17, 0, sizeof(v17));
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    a2[4] = 0;
  }
  if ( a3 )
  {
    memset(a3, 0, 0x48uLL);
    a3[1] = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
    *a3 = a3;
  }
  if ( !v3 || !AMLIIsNamedChildPresent(v3, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  v8 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v19, 0LL);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v19[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v19, a2);
      if ( v8 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v13 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v21);
    v7 = v21;
    v8 = v13;
    if ( v13 < 0 )
      goto LABEL_8;
    if ( a2 )
    {
LABEL_29:
      ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
      v7 = 0LL;
      goto LABEL_30;
    }
    v12 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v19, (_DWORD *)(v21 + 16));
LABEL_28:
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_8;
    goto LABEL_29;
  }
  if ( WORD1(v19[0]) != 4 )
    goto LABEL_38;
  v10 = v20;
  if ( !*v20 )
    goto LABEL_38;
  v8 = AMLIEvalPkgDataElement((__int64)v19, 0, (__int64)v17);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v17[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v17, a2);
      if ( v8 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v11 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v21);
    v7 = v21;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_8;
    if ( !a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v17, (_DWORD *)(v21 + 16));
      if ( v8 < 0 )
        goto LABEL_8;
    }
    v12 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v19, 0LL, v7);
    goto LABEL_28;
  }
  if ( WORD1(v17[0]) != 4 )
  {
LABEL_38:
    v8 = -1073741823;
    goto LABEL_10;
  }
  if ( !a3 )
  {
    if ( a2 )
      v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v17, (__int64)a2, 0LL);
    goto LABEL_10;
  }
  v14 = 0;
  do
  {
    v15 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &v21);
    v7 = v21;
    v8 = v15;
    if ( v15 < 0 )
      break;
    v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v17, v21 + 16, v21);
    if ( v8 < 0 )
      break;
    if ( !v14 && a2 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v7 + 16);
      a2[4] = *(_DWORD *)(v7 + 32);
    }
    ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
    ++v14;
    v7 = 0LL;
    v21 = 0LL;
    if ( v14 >= *v10 )
      break;
    AMLIFreeDataBuffs((__int64)v17);
    v8 = AMLIEvalPkgDataElement((__int64)v19, v14, (__int64)v17);
    if ( v8 < 0 )
      break;
  }
  while ( WORD1(v17[0]) == 4 );
  if ( v8 < 0 )
    goto LABEL_8;
LABEL_30:
  if ( a3[2] || (_QWORD *)a3[5] != a3 + 5 )
  {
LABEL_8:
    if ( v7 )
      ACPIFreePhysicalDeviceLocationDescriptor((char *)v7);
    goto LABEL_10;
  }
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( a3[2] )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
  }
LABEL_10:
  if ( v18 )
    AMLIFreeDataBuffs((__int64)v17);
  if ( v20 )
    AMLIFreeDataBuffs((__int64)v19);
  return (unsigned int)v8;
}
