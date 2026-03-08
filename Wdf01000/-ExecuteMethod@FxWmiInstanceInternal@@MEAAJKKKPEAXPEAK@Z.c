/*
 * XREFs of ?ExecuteMethod@FxWmiInstanceInternal@@MEAAJKKKPEAXPEAK@Z @ 0x1C0028C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceInternal::ExecuteMethod(
        FxWmiInstanceInternal *this,
        unsigned int MethodId,
        unsigned int InBufferSize,
        unsigned int OutBufferSize,
        void *Buffer,
        unsigned int *BufferUsed)
{
  return ((__int64 (__fastcall *)(FxDeviceBase *, FxWmiInstanceInternal *, _QWORD, _QWORD, unsigned int, void *, unsigned int *))this->m_ExecuteMethod)(
           this->m_Provider->m_Parent->m_DeviceBase,
           this,
           MethodId,
           InBufferSize,
           OutBufferSize,
           Buffer,
           BufferUsed);
}
