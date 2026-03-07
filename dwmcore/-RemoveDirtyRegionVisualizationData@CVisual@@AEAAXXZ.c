void __fastcall CVisual::RemoveDirtyRegionVisualizationData(CVisual *this, __int64 a2, __int64 a3)
{
  void *DirtyRegionVisualizationData; // rbx

  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    DirtyRegionVisualizationData = (void *)CVisual::GetDirtyRegionVisualizationData(this, a2, a3);
    std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(DirtyRegionVisualizationData);
    if ( DirtyRegionVisualizationData )
    {
      std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::~deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(DirtyRegionVisualizationData);
      operator delete(DirtyRegionVisualizationData, 0x28uLL);
    }
    CVisual::SetDirtyRegionVisualizationData(this, 0LL);
  }
}
