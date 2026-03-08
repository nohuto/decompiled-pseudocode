/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C007D24C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000BAE4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C007DAF0 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkSetIndependentFlipMode @ 0x1C02D71BC (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h]

  v2 = *((_QWORD *)this + 1);
  v3 = (char *)this + 552;
  v9 = 0;
  v10 = v2;
  v6 = DxgkSetIndependentFlipMode(
         *((HANDLE *)this + 68),
         *((_DWORD *)this + 155),
         *((_DWORD *)this + 154),
         (__int64)this + 552,
         (__int64)&v9,
         (__int64)this + 536);
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 154) = 0;
  v7 = v6;
  memset(v3, 0, 0x40uLL);
  ObCloseHandle(*((HANDLE *)this + 68), 0);
  *((_QWORD *)this + 68) = 0LL;
  *((_BYTE *)this + 628) = 0;
  if ( a2 )
    *a2 = v9;
  return v7;
}
