/*
 * XREFs of ??1?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C8728
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x1802C1000 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1802C9FD0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::~ComPtr<ViewSizePreferencesChangedEventArgsImpl>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(a1);
}
