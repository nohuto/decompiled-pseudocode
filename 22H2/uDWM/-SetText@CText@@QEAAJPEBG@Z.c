/*
 * XREFs of ?SetText@CText@@QEAAJPEBG@Z @ 0x18002BD5C
 * Callers:
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAF4 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x18002BD18 (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800956A8 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002BE54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     StringCchLengthW @ 0x18002BEF4 (StringCchLengthW.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetText(size_t *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  size_t v5; // rdx
  HRESULT v6; // eax
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(size_t *, __int64))(*this + 24))(this, 4096LL);
  v5 = this[36];
  *((_BYTE *)this + 280) &= ~1u;
  if ( v5 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[36] = 0LL;
  }
  if ( !a2 )
    return v4;
  pcchLength = 0LL;
  v6 = StringCchLengthW(a2, v5, &pcchLength);
  v4 = v6;
  if ( v6 < 0 )
  {
    v10 = 113;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v10);
    return v4;
  }
  v7 = pcchLength;
  if ( pcchLength )
  {
    v8 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               2 * pcchLength + 2);
    this[36] = (size_t)v8;
    if ( !v8 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x79u);
      return v4;
    }
    v6 = StringCchCopyW(v8, v7 + 1, a2);
    v4 = v6;
    if ( v6 < 0 )
    {
      v10 = 123;
      goto LABEL_12;
    }
  }
  return v4;
}
