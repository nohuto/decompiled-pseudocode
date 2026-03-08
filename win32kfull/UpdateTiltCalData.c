/*
 * XREFs of UpdateTiltCalData @ 0x1C01A6A40
 * Callers:
 *     _SetCalibrationData @ 0x1C01AB99C (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateTiltCalData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // ebp
  void *v13; // rdx
  void *v14; // rcx

  v5 = 0;
  if ( !*(_QWORD *)(a1 + 392) )
    *(_QWORD *)(a1 + 392) = Win32AllocPoolZInit(88LL, 2020635477LL);
  v10 = *(_QWORD *)(a1 + 392);
  if ( v10 )
  {
    v11 = a4 - 1;
    if ( !v11 || (v12 = v11 - 1) == 0 )
    {
      v14 = *(void **)v10;
      if ( v14 )
        Win32FreePool(v14);
      **(_QWORD **)(a1 + 392) = a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 392) + 8LL) = a2;
      return 1;
    }
    if ( v12 != 1 )
      return 1;
    switch ( *(_DWORD *)(a1 + 224) )
    {
      case 1:
        v13 = *(void **)(v10 + 16);
        *(_QWORD *)(v10 + 16) = a3;
        *(_DWORD *)(v10 + 24) = a2;
        *a5 = 0;
        break;
      case 2:
        v13 = *(void **)(v10 + 32);
        *(_QWORD *)(v10 + 32) = a3;
        *(_DWORD *)(v10 + 40) = a2;
        *a5 = 1;
        break;
      case 3:
        v13 = *(void **)(v10 + 48);
        *(_QWORD *)(v10 + 48) = a3;
        *(_DWORD *)(v10 + 56) = a2;
        *a5 = 2;
        break;
      case 4:
        v13 = *(void **)(v10 + 64);
        *(_QWORD *)(v10 + 64) = a3;
        *(_DWORD *)(v10 + 72) = a2;
        *a5 = 3;
        break;
      default:
        return 1;
    }
    *(_QWORD *)(v10 + 80) = a3;
    if ( v13 )
      Win32FreePool(v13);
    return 1;
  }
  return v5;
}
