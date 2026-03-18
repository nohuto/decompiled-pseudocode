/*
 * XREFs of LogFwInitialize @ 0x140AF3A18
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C0E4B0 |= 0x80u;
  qword_140CF7BE0 = 0LL;
  qword_140CF7C38 = 0LL;
  qword_140D18110 = 0LL;
  dword_140CF7C18 = 0;
  qword_140CF7BC8 = 0LL;
  qword_140CF7C20 = 0LL;
  qword_140CF7C00 = 0LL;
  qword_140CF7BD0 = 0LL;
  qword_140CF7BF8 = 0LL;
  qword_140CF7BB8 = 0LL;
  qword_140CF7BC0 = 0LL;
  qword_140CF7C48 = 0LL;
  qword_140CF7C10 = 0LL;
  qword_140CF7C08 = 0LL;
  qword_140CF7C28 = 0LL;
  dword_140CF7BE8 = 0;
  dword_140CF7BF0 = 0;
  dword_140CF7BD8 = 0;
  dword_140CF7C40 = 0;
  dword_140CF7C1C = 0;
  dword_140CF7BEC = 0;
  qword_140C0C9C0 = 1LL;
  qword_140C0B708 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C0B710 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C70E40, 0, sizeof(stru_140C70E40));
}
