/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180107140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180106C2C (--1MPCManagerClient@@UEAA@XZ.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  MPCManagerClient::~MPCManagerClient(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x6C8);
  return this;
}
