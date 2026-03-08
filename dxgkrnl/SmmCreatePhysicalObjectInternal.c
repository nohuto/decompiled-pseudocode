/*
 * XREFs of SmmCreatePhysicalObjectInternal @ 0x1C0013170
 * Callers:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmInitializePhysicalObject @ 0x1C00133B8 (SmmInitializePhysicalObject.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x1C006F2E0 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

_QWORD *__fastcall SmmCreatePhysicalObjectInternal(int a1, int a2, int a3, int a4, char a5, __int64 a6, int a7)
{
  __int64 v11; // rdi
  _QWORD *Pool2; // rbx
  int v13; // r8d
  volatile signed __int64 *v14; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d

  v11 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 104LL, 829651012LL);
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_1C013BD2C);
    WdLogSingleEntry1(6LL, 327LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v17,
        v16,
        v18,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate (NonPaged) SYSMM_PHYSICAL_OBJECT",
        327LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 0LL;
  }
  if ( (dword_1C013BCE0 & 0x20) != 0 )
  {
    v11 = operator new[](0x90uLL, 0x31737844u, 64LL);
    if ( !v11 )
    {
      _InterlockedIncrement(&dword_1C013BD30);
      WdLogSingleEntry1(6LL, 336LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          1,
          -1,
          (__int64)L"Failed to allocate SYSMM_PHYSICAL_OBJECT_DEBUG",
          336LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
  }
  Pool2[3] = v11;
  SmmInitializePhysicalObject((_DWORD)Pool2, a1, a2, a3, a4, a5, a6, a7);
  _InterlockedExchangeAdd64(&qword_1C013BCE8, *Pool2);
  v14 = (volatile signed __int64 *)&unk_1C013BCF8;
  if ( (*((_DWORD *)Pool2 + 11) & 1) == 0 )
    v14 = (volatile signed __int64 *)&unk_1C013BCF0;
  _InterlockedExchangeAdd64(v14, *Pool2);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      (_DWORD)v14,
      (unsigned int)&CreatePhysicalObject,
      v13,
      a2,
      Pool2[1],
      a1,
      a4,
      a5,
      a6,
      a7,
      (char)Pool2);
  return Pool2;
}
