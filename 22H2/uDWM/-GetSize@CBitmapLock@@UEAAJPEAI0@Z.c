/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x180050340
 * Callers:
 *     ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x1800581B0 (-GetSize@CBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050C1C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (char *)this - 56;
  v11 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( !a2 )
  {
    v9 = -2147024809;
    v10 = 122;
LABEL_11:
    v4 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10);
    goto LABEL_7;
  }
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 123;
    goto LABEL_11;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v9 = -2003292412;
    v10 = 125;
    goto LABEL_11;
  }
  *a2 = *((_DWORD *)this + 8);
  *a3 = *((_DWORD *)this + 9);
LABEL_7:
  CGuard<CMTALock>::~CGuard<CMTALock>(&v11);
  return v4;
}
