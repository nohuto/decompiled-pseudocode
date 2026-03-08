/*
 * XREFs of PopWriteImageHeader @ 0x140AA2B28
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     tcpxsum @ 0x1404200B0 (tcpxsum.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 */

__int64 (*__fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int64 *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int64 (*result)(void); // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_140C3CFF0 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_140C3D1B4 = ((unsigned int)dword_140C3CA80 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  for ( qword_140C3D020 = PerformanceCounter.QuadPart;
        v10 < *(_DWORD *)(a1 + 256);
        qword_140C3D000 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 80) )
  {
    v11 = v10++;
    v11 <<= 7;
    qword_140C3D180 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 56);
    qword_140C3CFF8 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 40);
  }
  qword_140C3D190 = qword_140C3D1A8;
  qword_140C3D1A0 = (unsigned int)dword_140C3D1B0;
  qword_140C3D1A8 += qword_140C3D188;
  v12 = qword_140C3D178;
  dword_140C3D1B0 += qword_140C3D198;
  *(_QWORD *)(a2 + 88) = qword_140C3D178;
  if ( byte_140C3CAA1 )
    *(_QWORD *)(a2 + 88) = qword_140C3D180 + v12;
  v13 = 4LL;
  v14 = (_OWORD *)(a2 + 136);
  v15 = &qword_140C3CFD8;
  do
  {
    *v14 = *(_OWORD *)v15;
    v14[1] = *((_OWORD *)v15 + 1);
    v14[2] = *((_OWORD *)v15 + 2);
    v14[3] = *((_OWORD *)v15 + 3);
    v14[4] = *((_OWORD *)v15 + 4);
    v14[5] = *((_OWORD *)v15 + 5);
    v14[6] = *((_OWORD *)v15 + 6);
    v14 += 8;
    v16 = *((_OWORD *)v15 + 7);
    v15 += 16;
    *(v14 - 1) = v16;
    --v13;
  }
  while ( v13 );
  *v14 = *(_OWORD *)v15;
  v14[1] = *((_OWORD *)v15 + 1);
  v14[2] = *((_OWORD *)v15 + 2);
  v14[3] = *((_OWORD *)v15 + 3);
  v14[4] = *((_OWORD *)v15 + 4);
  v17 = *((_OWORD *)v15 + 5);
  *(_DWORD *)a2 = 1380075848;
  v14[5] = v17;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x448u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(__int64 (**)(void))(*(_QWORD *)(a1 + 168) + 72LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
