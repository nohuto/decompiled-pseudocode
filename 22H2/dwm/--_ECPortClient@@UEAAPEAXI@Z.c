/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x1400082D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x14000143C (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1400031B8 (--3@YAXPEAX_K@Z.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
