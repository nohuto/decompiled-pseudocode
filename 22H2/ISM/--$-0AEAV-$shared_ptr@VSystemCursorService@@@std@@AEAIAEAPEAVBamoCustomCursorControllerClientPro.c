/*
 * XREFs of ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013AB48
 * Callers:
 *     ??$make_shared@VCustomCursorApplication@@AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication@@@0@AEAV?$shared_ptr@VSystemCursorService@@@0@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B374 (--$make_shared@VCustomCursorApplication@@AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEA.c)
 * Callees:
 *     ??0CustomCursorApplication@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B4FC (--0CustomCursorApplication@@QEAA@V-$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursor.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<CustomCursorApplication>::_Ref_count_obj<CustomCursorApplication>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  __int128 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v8 = a2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CustomCursorApplication>::`vftable';
  v5 = a1 + 16;
  v6 = *a4;
  v7 = *a3;
  v10 = 0LL;
  *((_QWORD *)&v8 + 1) = *(_QWORD *)(a2 + 8);
  if ( *((_QWORD *)&v8 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 1u);
    *((_QWORD *)&v8 + 1) = *(_QWORD *)(v8 + 8);
  }
  *(_QWORD *)&v8 = *(_QWORD *)v8;
  v10 = v8;
  ((void (__fastcall *)(__int64, __int128 *, __int64, __int64))CustomCursorApplication::CustomCursorApplication)(
    v5,
    &v10,
    v7,
    v6);
  return a1;
}
