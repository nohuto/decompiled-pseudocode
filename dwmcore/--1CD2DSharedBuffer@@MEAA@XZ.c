/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180011050
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180010C80 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CD2DSharedBuffer::`vftable';
  if ( v1 )
    operator delete(*((void **)this + 2));
  else
    ReleaseInterface<CSharedSection>((char *)this + 32);
}
