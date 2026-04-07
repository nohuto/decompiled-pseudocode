/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180050930
 * Callers:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180050518 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180050848 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x1800C04C0 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rdx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  OwningThread = this[5].OwningThread;
  this->SpinCount = (ULONG_PTR)&CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[2].SpinCount = (ULONG_PTR)&CBitmap::`vftable'{for `CMTALock'};
  (*(void (__fastcall **)(WPF::HeapBase *, HANDLE))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    OwningThread);
  this[2].SpinCount = (ULONG_PTR)&CMTALock::`vftable';
  if ( LOBYTE(this[4].DebugInfo) )
  {
    DeleteCriticalSection(this + 3);
    LOBYTE(this[4].DebugInfo) = 0;
  }
  *(_QWORD *)&this[1].LockCount = &CMILResourceCache::`vftable';
LABEL_4:
  LODWORD(v3) = this[2].DebugInfo;
  while ( (_DWORD)v3 )
  {
    v4 = this[1].OwningThread;
    v3 = (unsigned int)(v3 - 1);
    LODWORD(this[2].DebugInfo) = v3;
    v5 = v4[v3];
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      goto LABEL_4;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&this[1].OwningThread);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
