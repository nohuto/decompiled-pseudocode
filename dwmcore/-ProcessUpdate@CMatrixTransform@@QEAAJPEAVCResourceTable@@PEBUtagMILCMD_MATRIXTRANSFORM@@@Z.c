__int64 __fastcall CMatrixTransform::ProcessUpdate(
        CMatrixTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MATRIXTRANSFORM *a3)
{
  *((_OWORD *)this + 10) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 3);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
