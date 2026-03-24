/*
 * XREFs of ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02EDD04
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C013FCF0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     <none>
 */

BTL_TOPOLOGY_CONSTRUCTOR *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  BTL_TOPOLOGY_CONSTRUCTOR *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 7) = -2;
  *((_DWORD *)this + 8) = -2;
  result = this;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 1;
  *((_WORD *)this + 26) = 0;
  *((_DWORD *)this + 14) = 4;
  *((_WORD *)this + 30) = 256;
  return result;
}
