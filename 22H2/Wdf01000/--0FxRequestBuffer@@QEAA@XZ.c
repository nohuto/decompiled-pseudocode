/*
 * XREFs of ??0FxRequestBuffer@@QEAA@XZ @ 0x1C000E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::FxRequestBuffer(FxRequestBuffer *this)
{
  this->DataType = FxRequestBufferUnspecified;
  this->u.Memory = 0LL;
  this->u.RefMdl.Mdl = 0LL;
}
