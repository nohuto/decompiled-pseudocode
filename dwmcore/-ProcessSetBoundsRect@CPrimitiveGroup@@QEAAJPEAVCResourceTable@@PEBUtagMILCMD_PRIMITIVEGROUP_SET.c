__int64 __fastcall CPrimitiveGroup::ProcessSetBoundsRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _OWORD *v6; // rdx
  _OWORD *v7; // rcx
  __int64 *v8; // r9
  __int64 v9; // rax

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a3 + 2)
    && (unsigned __int8)operator!=(v5 + 108, v3, v4) )
  {
    v9 = *v8;
    *v7 = *v6;
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 72))(v8, 3LL);
  }
  return 0LL;
}
