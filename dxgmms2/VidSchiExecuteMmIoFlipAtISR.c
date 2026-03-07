char __fastcall VidSchiExecuteMmIoFlipAtISR(_QWORD *a1)
{
  unsigned int *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = DxgCoreInterface[29](
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*a1 + 16LL) + 2920LL),
                            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 1));
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(*a1, *(_QWORD *)(*a1 + 8LL * *v2 + 3200), 0LL);
    v3 = *v2;
    v4 = *a1;
    a1[266] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v3 + 3200) + 44144LL);
    *((_DWORD *)a1 + 531) = *(_DWORD *)(*(_QWORD *)(v4 + 8 * v3 + 3200) + 44152LL);
  }
  return 1;
}
