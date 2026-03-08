/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C00BC724
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00BBD4C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C00BC784 (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00BCAB0 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 */

struct UmfdTls *UmfdTls::Create(void)
{
  _OWORD *v0; // rbx
  struct UmfdUMBuffer *v1; // rax

  v0 = EngAllocMem(0, 0x38u, 0x6C744446u);
  if ( !v0 )
    return (struct UmfdTls *)v0;
  *v0 = 0LL;
  v0[1] = 0LL;
  v0[2] = 0LL;
  *((_QWORD *)v0 + 6) = 0LL;
  *((_DWORD *)v0 + 2) = -1;
  v1 = UmfdUMBuffer::Create();
  *(_QWORD *)v0 = v1;
  if ( v1 )
    return (struct UmfdTls *)v0;
  UmfdTls::Destroy(v0);
  return 0LL;
}
