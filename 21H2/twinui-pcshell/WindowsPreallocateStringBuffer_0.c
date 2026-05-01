/*
 * XREFs of WindowsPreallocateStringBuffer_0 @ 0x18009491A
 * Callers:
 *     ??0hstring_builder@impl@winrt@@QEAA@I@Z @ 0x18021D80C (--0hstring_builder@impl@winrt@@QEAA@I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsPreallocateStringBuffer_0(UINT32 length, WCHAR **charBuffer, HSTRING_BUFFER *bufferHandle)
{
  return WindowsPreallocateStringBuffer(length, charBuffer, bufferHandle);
}
