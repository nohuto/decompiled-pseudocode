/*
 * XREFs of PfpSectInfoHandleFullBuffer @ 0x1407E5A60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfTTraceListAdd @ 0x1407E797C (PfTTraceListAdd.c)
 */

__int64 __fastcall PfpSectInfoHandleFullBuffer(_DWORD *a1)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int v5; // edi

  v2 = a1[11];
  v3 = a1[8] - (_DWORD)a1;
  v4 = a1[10];
  v5 = a1[6] - (_DWORD)a1;
  memset(a1, 0, 0x40uLL);
  a1[4] = 852013;
  a1[8] = 3;
  a1[6] = v5 - 16;
  a1[5] = 1128485697;
  a1[7] = 1;
  a1[9] = HIDWORD(xmmword_140C650D0);
  a1[10] = dword_140C650E4;
  a1[12] = v4;
  a1[13] = v3;
  a1[11] = 32;
  a1[14] = v2;
  return PfTTraceListAdd(a1);
}
