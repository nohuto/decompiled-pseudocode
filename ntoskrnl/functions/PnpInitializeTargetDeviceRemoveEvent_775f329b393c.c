void *__fastcall PnpInitializeTargetDeviceRemoveEvent(
        GUID *a1,
        size_t Size,
        PVOID Object,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        void *a11,
        __int64 a12,
        __int64 a13)
{
  size_t v13; // r15
  __int64 v17; // rsi
  unsigned int v18; // ebp
  void *result; // rax
  GUID v20; // xmm0

  v13 = (unsigned int)Size;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  if ( Object )
    v17 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) >> 1;
  memset(a1, 0, v13);
  *(_QWORD *)a1[1].Data4 = a10;
  a1[1].Data1 = a8;
  *(_DWORD *)&a1[1].Data2 = a9;
  *(_QWORD *)&a1[3].Data1 = a12;
  *(_QWORD *)a1[3].Data4 = a13;
  *(_DWORD *)&a1[9].Data2 = 2 * v18 + 82;
  result = a11;
  *(_QWORD *)a1[8].Data4 = a11;
  a1[4].Data1 = 1;
  *(_QWORD *)a1[9].Data4 = Object;
  a1[8].Data1 = 1;
  if ( a6 )
    v20 = GUID_DEVICE_EJECT;
  else
    v20 = GUID_DEVICE_QUERY_AND_REMOVE;
  a1[7] = v20;
  if ( a5 )
    a1[9].Data1 |= 2u;
  if ( a4 )
    a1[9].Data1 |= 4u;
  if ( a7 )
    a1[9].Data1 |= 8u;
  if ( v18 )
    result = memmove(&a1[10], *(const void **)(v17 + 48), 2LL * v18);
  *((_WORD *)&a1[10].Data1 + v18) = 0;
  return result;
}
