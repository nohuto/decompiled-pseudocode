/*
 * XREFs of ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C02936A8
 * Callers:
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C0134D14 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::vServer(UMPDOBJ *this, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !*((_WORD *)a2 + 38) && *((char *)a2 + 78) < 0 && !*((_DWORD *)a2 + 146) )
  {
    v3 = a2[6];
    v4 = a2[7];
    a2[6] = a2[71];
    a2[7] = a2[72];
    *((_DWORD *)a2 + 146) = 1;
    a2[71] = v3;
    a2[72] = v4;
  }
}
