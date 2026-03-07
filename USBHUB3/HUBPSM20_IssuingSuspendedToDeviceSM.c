__int64 __fastcall HUBPSM20_IssuingSuspendedToDeviceSM(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4098LL);
  *(_WORD *)(v1 + 184) |= 4u;
  return 3013LL;
}
