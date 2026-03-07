__int64 __fastcall CCpuClipAntialiasBatchCommand::GetWorldBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct MilRectF *v4; // rdx
  __int128 *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v3 && *(float *)(a1 + 104) == *(float *)(v2 + 92) && *(float *)(a1 + 108) == *(float *)(v2 + 96) )
  {
    v6 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v4 = (struct MilRectF *)&v7;
    v7 = *v6;
  }
  else
  {
    CCpuClipAntialiasSink::CalcBoundingRect(*(_QWORD *)(v2 + 80), v3, a1 + 100, (float *)&v7);
    v4 = (struct MilRectF *)&v8;
    v8 = v7;
  }
  return CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 16), v4);
}
