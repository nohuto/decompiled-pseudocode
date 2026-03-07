__int64 __fastcall CMatrixTransform3D::ProcessUpdate(
        CMatrixTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MATRIXTRANSFORM3D *a3)
{
  *((_OWORD *)this + 10) = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 24);
  *((_OWORD *)this + 12) = *(_OWORD *)((char *)a3 + 40);
  *((_OWORD *)this + 13) = *(_OWORD *)((char *)a3 + 56);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
