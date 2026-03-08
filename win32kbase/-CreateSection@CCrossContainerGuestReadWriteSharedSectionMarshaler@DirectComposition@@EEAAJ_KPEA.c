/*
 * XREFs of ?CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEAPEAX@Z @ 0x1C0261A30
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionIsVailContainer @ 0x1C0247CF4 (DCompositionIsVailContainer.c)
 *     CreateVmSharedMemorySection @ 0x1C02750B0 (CreateVmSharedMemorySection.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::CreateSection(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        __int64 a2,
        void **a3)
{
  int v6; // ebx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = -1073741790;
  if ( (unsigned int)DCompositionIsVailContainer() )
  {
    v9[0] = a2;
    ExUuidCreate((UUID *)((char *)this + 72));
    v6 = CreateVmSharedMemorySection(&v10, (char *)this + 72, v7, v9);
    if ( v6 >= 0 )
      *a3 = v10;
  }
  return (unsigned int)v6;
}
