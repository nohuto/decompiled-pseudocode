/*
 * XREFs of ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1801D4440
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18006C64C (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1801BDA04 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801D486C (-_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PRE.c)
 *     WPP_SF_dL @ 0x1801D4968 (WPP_SF_dL.c)
 */

__int64 __fastcall CRotationManagerSync::LockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  int v4; // ecx
  ORIENTATION_PREFERENCE v5; // edi
  unsigned int OrientationPreferenceFromCurrentOrientation; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  __int64 Ptr_high; // rdx
  ORIENTATION_PREFERENCE v12; // [rsp+48h] [rbp+10h] BYREF

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    v2 = 0;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 10);
    v5 = ORIENTATION_PREFERENCE_NONE;
    v12 = ORIENTATION_PREFERENCE_NONE;
    if ( !v4 )
    {
      OrientationPreferenceFromCurrentOrientation = CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
                                                      (CRotationManagerSync *)((char *)this - 80),
                                                      &v12);
      v4 = *((_DWORD *)this + 10);
      v2 = OrientationPreferenceFromCurrentOrientation;
      v5 = v12;
    }
    v7 = v4 + 1;
    *((_DWORD *)this + 10) = v7;
    if ( v7 == 1 )
    {
      v8 = *((_DWORD *)this + 6);
      *(_QWORD *)((char *)this + 28) = *((_QWORD *)this + 2);
      *((_DWORD *)this + 9) = v8;
      *((_BYTE *)this + 37) = 1;
      if ( v5 != *((_DWORD *)this + 5) || !(_BYTE)v8 )
      {
        *((_DWORD *)this + 5) = v5;
        v9 = *((_BYTE *)this + 25) == 0;
        *((_BYTE *)this + 24) = 0;
        if ( v9 )
        {
          SetDisplayAutoRotationPreferences(v5);
          *((_BYTE *)this + 24) = 1;
        }
      }
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      if ( (_DWORD)Ptr_high != *((_DWORD *)this + 4) )
      {
        CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), Ptr_high, v3);
        *((_DWORD *)this + 4) = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 2), Ptr_high, v3, *((unsigned int *)this + 7), v5);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
