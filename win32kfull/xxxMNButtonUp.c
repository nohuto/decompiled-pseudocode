/*
 * XREFs of xxxMNButtonUp @ 0x1C02198AC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0218A2C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 */

__int64 __fastcall xxxMNButtonUp(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  bool v6; // zf
  _DWORD *v7; // rcx
  _QWORD *v8; // r8

  result = *(unsigned int *)(a2 + 8);
  if ( (result & 8) != 0 )
  {
    if ( a3 != -1 )
    {
      result = *a1;
      if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == a3 )
      {
        v6 = (**(_DWORD **)*a1 & 1) == 0;
        v7 = *(_DWORD **)*a1;
        if ( !v6 )
        {
          if ( (*v7 & 0x20) != 0 )
          {
            result = **(unsigned int **)*a1;
            if ( (result & 0x80u) != 0LL )
            {
              **(_DWORD **)*a1 &= ~0x80u;
              return xxxMNCancel(a2, 0);
            }
            goto LABEL_10;
          }
LABEL_12:
          result = *a1;
          if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) != -1 )
          {
            result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 44LL);
            if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) < (unsigned int)result )
            {
              result = *(int *)(*(_QWORD *)*a1 + 80LL);
              v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 88LL) + 96 * result);
              if ( (*(_DWORD *)*v8 & 0x800) == 0 )
              {
                result = *(unsigned int *)(*v8 + 4LL);
                if ( (result & 3) == 0 && !v8[2] )
                  return xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v8, *(_DWORD *)(*(_QWORD *)*a1 + 80LL));
              }
            }
          }
          goto LABEL_10;
        }
        if ( (*v7 & 0x2000) == 0 )
          goto LABEL_12;
        **(_DWORD **)*a1 &= ~0x80u;
        result = xxxMNOpenHierarchy(a1, a2);
      }
    }
LABEL_10:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
  }
  return result;
}
